/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msosnova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 14:08:20 by msosnova          #+#    #+#             */
/*   Updated: 2021/07/19 14:08:30 by msosnova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

int		ft_printf(const char * line_for_print, ...);
int		ft_print_char (char ch);
int		ft_print_line (char *str);
int		ft_print_pointer (void *pointer);
int		ft_print_int_dec (int nbr);
int		ft_print_u_dec (unsigned int nbr);
int		ft_print_hexa (unsigned int nbr, char a);

#endif
