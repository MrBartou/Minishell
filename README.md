# Minishell

[![Project Status: Active – The project has reached a stable, usable state and is being actively developed.](https://www.repostatus.org/badges/latest/active.svg)](https://www.repostatus.org/#active)  ![GitHub release (latest by date including pre-releases)](https://img.shields.io/github/v/release/MrBartou/Epibot-discord?include_prereleases) ![GitHub last commit](https://img.shields.io/github/last-commit/MrBartou/EpiBot-discord) [![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)


Projet Minishell -> Création d'un shell en c type TCSH

  - Language C
  - Bibliothèques C
  - Projet de 4 semaines

# Realease V1 (Mai 2020)

  - Lancement de commande
  - Lancement des commandes du PATH
  - Affichage de l'environnement
  - Utilisation des ";"

## Le minishell

Projet Epitech en trois parties, qui demande de re-créer un shell en c sur la base du TCSH

## Fonctions autorisée

| Fonction | Lib |
| ------ | ------ |
| malloc,free,exit,opendir,readdir,closedir,getcwd,chdir | [Lib C]() |
| fork,stat,lstat,fstat,open,close,getline | [Lib C]() |
| read,write,execve,access,isatty,wait,waitpid | [Lib C]() |
| wait3,wait4,signal,kill,getpid,strerror,perror,strsignal | [Lib C]() |
| pipe | [Lib C]() |
| dup, dup2 | [Lib C]() |

## Installation

Pour lancer le projet il suffit de faire:

```sh
$ make
$ ./mysh
```

Pour lancer les tests unitaire (Besoin de critérion)

```sh
$ make test_run
```

## Todo

Le projet n'est pas encore fini.

Plusieurs Update sont encore prévue et plusieurs feature sont en cours de préparation.

Feature 1:
```sh
Implémentation des Pipes
```

Feature 2:
```sh
Implémentation des redirections
```

## Contact

Vous avez des idées, faire remonté des bug, aider dans le développement ?

- [Github](https://github.com/MrBartou/)
- [linkedin - Anthony DENIN](https://www.linkedin.com/in/anthony-denin/)

License
----

**Licence publique Creative Commons Attribution - Utilisation non commerciale - Partage dans les mêmes conditions 4.0 International**


Free Software, Hell Yeah!
