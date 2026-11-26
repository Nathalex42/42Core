<a id="top"></a>

# Exam Rank 02 · École 42

```text
███████╗██╗  ██╗ █████╗ ███╗   ███╗    ██████╗  █████╗ ███╗   ██╗██╗  ██╗     ██████╗ ██████╗
██╔════╝╚██╗██╔╝██╔══██╗████╗ ████║    ██╔══██╗██╔══██╗████╗  ██║██║ ██╔╝    ██╔═████╗╚════██╗
█████╗   ╚███╔╝ ███████║██╔████╔██║    ██████╔╝███████║██╔██╗ ██║█████╔╝     ██║██╔██║ █████╔╝
██╔══╝   ██╔██╗ ██╔══██║██║╚██╔╝██║    ██╔══██╗██╔══██║██║╚██╗██║██╔═██╗     ████╔╝██║██╔═══╝
███████╗██╔╝ ██╗██║  ██║██║ ╚═╝ ██║    ██║  ██║██║  ██║██║ ╚████║██║  ██╗    ╚██████╔╝███████╗
╚══════╝╚═╝  ╚═╝╚═╝  ╚═╝╚═╝     ╚═╝    ╚═╝  ╚═╝╚═╝  ╚═╝╚═╝  ╚═══╝╚═╝  ╚═╝     ╚═════╝ ╚══════╝

            ~ École 42 · Common Core · gcc -Wall -Wextra -Werror ~
```

Mes solutions des exercices de l'exam rank 02 du Common Core.
Tout est en C, compilé avec `gcc -Wall -Wextra -Werror`.

L'exam a 4 niveaux. Un exercice est tiré au hasard par niveau.
Chaque niveau réussi rapporte 25 points.

<p align="center">
  <img src="https://img.shields.io/badge/langage-C-00599C?style=for-the-badge&logo=c&logoColor=white" alt="C">
  <img src="https://img.shields.io/badge/école-42-000000?style=for-the-badge&logo=42&logoColor=white" alt="42">
  <img src="https://img.shields.io/badge/exam-rank%2002-00BABC?style=for-the-badge" alt="rank 02">
  <img src="https://img.shields.io/badge/score-100%2F100-success?style=for-the-badge" alt="100/100">
  <img src="https://img.shields.io/badge/exercices-57-blueviolet?style=for-the-badge" alt="57 exercices">
</p>

## Sommaire

- [Compiler et tester](#compiler-et-tester)
- [Niveau 1](#niveau-1)
- [Niveau 2](#niveau-2)
- [Niveau 3](#niveau-3)
- [Niveau 4](#niveau-4)
- [Les réflexes à avoir](#les-réflexes-à-avoir)

## Compiler et tester

Pour un programme :

```bash
gcc -Wall -Wextra -Werror first_word.c -o first_word
./first_word "FOR PONY" | cat -e
```

Pour une fonction, il faut ajouter un `main` de test à part :

```bash
gcc -Wall -Wextra -Werror ft_strlen.c main.c -o test
./test
```

`| cat -e` affiche un `$` en fin de ligne. Pratique pour repérer un `\n` en trop ou manquant.

## Niveau 1

```text
 _    _____   _____ _      _
| |  | __\ \ / / __| |    / |
| |__| _| \ V /| _|| |__  | |
|____|___| \_/ |___|____| |_|
```

<details>
<summary><b>Voir les 12 exercices</b></summary>

| Exercice | Type | But |
|---|---|---|
| first_word | programme | Affiche le premier mot |
| fizzbuzz | programme | 1 à 100, fizz / buzz / fizzbuzz |
| ft_putstr | fonction | Affiche une chaîne |
| ft_strcpy | fonction | Copie s2 dans s1 |
| ft_strlen | fonction | Longueur d'une chaîne |
| ft_swap | fonction | Échange deux int via leurs adresses |
| repeat_alpha | programme | Répète chaque lettre selon sa position dans l'alphabet |
| rev_print | programme | Affiche la chaîne à l'envers |
| rot_13 | programme | Décale chaque lettre de 13 |
| rotone | programme | Décale chaque lettre de 1 |
| search_and_replace | programme | Remplace une lettre par une autre |
| ulstr | programme | Inverse la casse |

</details>

<p align="right"><a href="#top">⬆ retour en haut</a></p>

## Niveau 2

```text
 _    _____   _____ _      ___
| |  | __\ \ / / __| |    |_  )
| |__| _| \ V /| _|| |__   / /
|____|___| \_/ |___|____| /___|
```

<details>
<summary><b>Voir les 20 exercices</b></summary>

| Exercice | Type | But |
|---|---|---|
| alpha_mirror | programme | a ↔ z, b ↔ y… |
| camel_to_snake | programme | helloWorld → hello_world |
| do_op | programme | Calcule `a op b` |
| ft_atoi | fonction | Chaîne → int |
| ft_strcmp | fonction | Compare deux chaînes |
| ft_strcspn | fonction | Indice du premier caractère présent dans reject |
| ft_strdup | fonction | Copie une chaîne avec malloc |
| ft_strpbrk | fonction | Adresse du premier caractère présent dans s2 |
| ft_strrev | fonction | Inverse une chaîne sur place |
| ft_strspn | fonction | Longueur du début composé de caractères de accept |
| inter | programme | Caractères communs aux deux chaînes, sans doublon |
| is_power_of_2 | fonction | 1 si n est une puissance de 2 |
| last_word | programme | Affiche le dernier mot |
| max | fonction | Plus grande valeur d'un tableau |
| print_bits | fonction | Affiche un octet en binaire |
| reverse_bits | fonction | Inverse les 8 bits d'un octet |
| snake_to_camel | programme | hello_world → helloWorld |
| swap_bits | fonction | Échange les deux moitiés d'un octet |
| union | programme | Caractères des deux chaînes, sans doublon |
| wdmatch | programme | s1 s'écrit-il avec les lettres de s2, dans l'ordre ? |

</details>

<p align="right"><a href="#top">⬆ retour en haut</a></p>

## Niveau 3

```text
 _    _____   _____ _      ____
| |  | __\ \ / / __| |    |__ /
| |__| _| \ V /| _|| |__   |_ \
|____|___| \_/ |___|____| |___/
```

<details>
<summary><b>Voir les 15 exercices</b></summary>

| Exercice | Type | But |
|---|---|---|
| add_prime_sum | programme | Somme des nombres premiers ≤ n |
| epur_str | programme | Un seul espace entre les mots |
| expand_str | programme | Trois espaces entre les mots |
| ft_atoi_base | fonction | Chaîne en base ≤ 16 → int |
| ft_list_size | fonction | Nombre de maillons d'une liste |
| ft_range | fonction | Tableau de start à end |
| ft_rrange | fonction | Tableau de end à start |
| hidenp | programme | s1 est-il caché dans s2 ? |
| lcm | fonction | Plus petit multiple commun |
| paramsum | programme | Nombre d'arguments |
| pgcd | programme | Plus grand diviseur commun |
| print_hex | programme | Affiche un nombre en hexadécimal |
| rstr_capitalizer | programme | Dernière lettre de chaque mot en majuscule |
| str_capitalizer | programme | Première lettre de chaque mot en majuscule |
| tab_mult | programme | Table de multiplication |

</details>

<p align="right"><a href="#top">⬆ retour en haut</a></p>

## Niveau 4

```text
 _    _____   _____ _      _ _
| |  | __\ \ / / __| |    | | |
| |__| _| \ V /| _|| |__  |_  _|
|____|___| \_/ |___|____|   |_|
```

<details>
<summary><b>Voir les 10 exercices</b></summary>

| Exercice | Type | But |
|---|---|---|
| flood_fill | fonction | Remplit une zone avec 'F' |
| fprime | programme | Décomposition en facteurs premiers |
| ft_itoa | fonction | int → chaîne |
| ft_list_foreach | fonction | Applique f à chaque donnée de la liste |
| ft_list_remove_if | fonction | Supprime les maillons égaux à data_ref |
| ft_split | fonction | Découpe une chaîne en mots |
| rev_wstr | programme | Mots dans l'ordre inverse |
| rostring | programme | Le premier mot passe à la fin |
| sort_int_tab | fonction | Trie un tableau d'int |
| sort_list | fonction | Trie une liste avec cmp |

</details>

<p align="right"><a href="#top">⬆ retour en haut</a></p>

## Les réflexes à avoir

**Le squelette des programmes.**
Le `\n` final s'écrit dans tous les cas, en dehors du `if (argc == ...)`.

```c
if (argc == 2)
{
	/* traitement */
}
write(1, "\n", 1);
return (0);
```

**Transformer chaque caractère.**
Les `if` modifient `c`. Puis un seul `write` et un seul `i++` en bas de la boucle.
Sert pour rotone, rot_13, alpha_mirror, ulstr.

**Sauter les séparateurs, puis lire le mot.**
Sert pour first_word, last_word, epur_str, expand_str, rostring, ft_split.

```c
while (s[i] == ' ' || s[i] == '\t')
	i++;
while (s[i] && s[i] != ' ' && s[i] != '\t')
	i++;
```

**Deux indices qui avancent ensemble.**
`j` parcourt s2, `i` n'avance dans s1 que quand ça correspond.
Sert pour wdmatch et hidenp.

**Un tableau de 256 cases.**
Pour savoir si un caractère a déjà été vu.
Sert pour union et inter.
L'indice doit être un `int`, pas un `char` (sinon erreur `char-subscripts`).

**Les briques à connaître par cœur.**
`ft_atoi` et `putnbr`. Elles servent dans add_prime_sum, paramsum, print_hex et tab_mult.

**Le parcours de liste.**

```c
while (lst)
	lst = lst->next;
```

<p align="right"><a href="#top">⬆ retour en haut</a></p>

```text
 ___ _   _  ___ ___ ___ ___ ___
/ __| | | |/ __/ __| __/ __/ __|
\__ \ |_| | (_| (__| _|\__ \__ \
|___/\___/ \___\___|___|___/___/

        >>>>>>>>>> SUCCESS <<<<<<<<<<   100/100
```
