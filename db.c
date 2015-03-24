/* 
 * File:   db.c
 * Author: morris
 *
 * Created on March 15, 2015, 1:57 AM
 */

#include <stdio.h>
#include <stdlib.h>
#include <mysql/mysql.h>

/*
 * 
 */
int main(int argc, char** argv) {
    MYSQL *conn;
    MYSQL_RES *res;
    MYSQL_ROW *row;
    char server[] = "localhost";
    char user[] = "root";
    char pass[] = "";
    char db[] = "voting";
    conn = mysql_init(NULL);
    //    int connStatus= mysql_real_connect(conn,server,user,pass,db,3306,NULL,0);
    //    if(connStatus){
    if (mysql_real_connect(conn, server, user, pass, db, 3306, NULL, 0)) {
        printf("Successfully connected to db\n");

        if (mysql_query(conn, "Select * from candidates")) {
            fprintf(stderr, "%s\n", mysql_error(conn));
            exit(1);
        }
        res = mysql_use_result(conn);
        /* output table name */
        printf("Id\t party Id\t Name\t\t gender\n");
        while ((row = mysql_fetch_row(res)) != NULL)
            printf("%s\t %s\t\t %s\t %s\n", row[0],row[1],row[2],row[3]);
        /* close connection */
        mysql_free_result(res);
        mysql_close(conn);
    } else {
        printf("Error connecting to db.\n REASON:\n%s\n", mysql_error(conn));
    }


    return (EXIT_SUCCESS);
}

