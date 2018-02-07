/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   5_files_3_lines_with_n.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acottier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/20 15:43:58 by acottier          #+#    #+#             */
/*   Updated: 2016/03/02 18:20:10 by acottier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdlib.h>
#include "../get_next_line.h"
#include <stdio.h>

int		main()
{
	int		fd1;
	int		fd2;
	int		fd3;
	int		fd4;
	int		fd5;
	int		output1;
	int		output2;
	int		output3;
	int		output4;
	int		output5;
	char	*line1;
	char	*line2;
	char	*line3;
	char	*line4;
	char	*line5;

	line1 = (char*)malloc(sizeof(char));
	line2 = (char*)malloc(sizeof(char));
	line3 = (char*)malloc(sizeof(char));
	line4 = (char*)malloc(sizeof(char));
	line5 = (char*)malloc(sizeof(char));
	fd1 = open("tests/samples/test1.txt", O_RDONLY);
	fd2 = open("tests/samples/test2.txt", O_RDONLY);
	fd3 = open("tests/samples/test3.txt", O_RDONLY);
	fd4 = open("tests/samples/test4.txt", O_RDONLY);
	fd5 = open("tests/samples/test5.txt", O_RDONLY);
	printf("fd1 : <%d>.\n", fd1);
	printf("fd2 : <%d>.\n", fd2);
	printf("fd3 : <%d>.\n", fd3);
	printf("fd4 : <%d>.\n", fd4);
	printf("fd5 : <%d>.\n", fd5);
	output1 = 1;
	output2 = 1;
	output3 = 1;
	output4 = 1;
	output5 = 1;
	while (output1 > 0 && output2 > 0 && output3 > 0 && output4 > 0 
			&& output5 > 0)
	{
		if (output1 != 0)
		{
			output1 = get_next_line(fd1, &line1);
			if (output1 == -1)
				printf("Error opening test1.txt.\n");
			else if (output1 > 0)
			{
				printf("<%d> ===>   ", output1);
				printf("File 1 : <%s>.\n", line1);
			}
			else
				printf("Lecture of test1.txt finished.\n");
		}
		if (output2 != 0)
		{
			output2 = get_next_line(fd2, &line2);
			if (output2 == -1)
				printf("Error opening test2.txt.\n");
			else if (output2 > 0)
			{
				printf("<%d> ===>   ", output2);
				printf("File 2 : <%s>.\n", line2);
			}
			else
				printf("Lecture of test2.txt finished.\n");
		}
		if (output3 != 0)
		{
			output3 = get_next_line(fd3, &line3);
			if (output3 == -1)
				printf("Error opening test3.txt.\n");
			else if (output3 != 0)
			{
				printf("<%d> ===>   ", output3);
				printf("File 3 : <%s>.\n", line3);
			}
			else
				printf("Lecture of test3.txt finished.\n");
		}
		if (output4 != 0)
		{
			output4 = get_next_line(fd4, &line4);
			if (output4 == -1)
				printf("Error opening test4.txt.\n");
			else if (output4 != 0)
			{
				printf("<%d> ===>   ", output4);
				printf("File 4 : <%s>.\n", line4);
			}
			else
				printf("Lecture of test4.txt finished.\n");
		}
		if (output5 != 0)
		{
			output5 = get_next_line(fd5, &line5);
			if (output5 == -1)
				printf("Error opening test5.txt.\n");
			else if (output5 != 0)
			{
				printf("<%d> ===>   ", output5);
				printf("File 5 : <%s>.\n", line5);
			}
			else
				printf("Lecture of test5.txt finished.\n");
		}
	}
	return (0);
}
