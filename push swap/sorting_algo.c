/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_algo.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seolee <seolee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 17:13:53 by seolee            #+#    #+#             */
/*   Updated: 2024/12/22 19:35:45 by seolee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void quick_sort(int arr[], int low, int high) 
{
    int pi;

    if (low < high)
    {
        pi = section(arr, low, high);
        quick_sort(arr, low, pi - 1);
        quick_sort(arr, pi + 1, high);
    }
}

int section(int arr[], int low, int high)
{
    int pivot; 
    int i;
    int temp;
    int j;

    pivot = arr[high];
    i = low - 1;
    j = low;
    while (j <= high - 1) 
    {
        if (arr[j] < pivot) 
        {
            i++;
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
        j++;
    }
    temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    return (i + 1);
}