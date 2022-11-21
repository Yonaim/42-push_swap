/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   enqueue_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhkim <yeonhkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 13:22:13 by yona              #+#    #+#             */
/*   Updated: 2022/11/10 16:41:36 by yeonhkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "deque_bonus.h"

void	enqueue(t_deque *dq, int edge, t_elem *putelem)
{
	if (edge != TOP && edge != BOTTOM)
		;
	if (!putelem)
		;
	if (dq->count == 0)
	{
		dq->p[TOP] = putelem;
		dq->p[BOTTOM] = putelem;
		dq->count++;
		return ;
	}
	if (edge == TOP)
	{
		dq->p[TOP]->up = putelem;
		putelem->down = dq->p[TOP];
	}
	else if (edge == BOTTOM)
	{
		dq->p[BOTTOM]->down = putelem;
		putelem->up = dq->p[BOTTOM];
	}
	dq->count++;
	dq->p[edge] = putelem;
}
