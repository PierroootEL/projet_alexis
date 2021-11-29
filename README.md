## Deux pages à développé :
	Lors d'une commande :
		Ajout d'une page avec l'équipe qui gère les commandes afin de permettre le choix de l'utilisateur
		de choisir le livreur de son choix en fonction du pays de livraison, afficher les délais de 
		livraison.
	
	Interface d'administration :
		Liste des transporteurs disponibles, et ajout possible
		Voir les status d'envoi / d'exports et pouvoir annuler les expéditions

		
## Interface :
	Utilisateur :
		Liste des transporteurs disponibles
		Liste des modes de livraison disponibles
		Prix d'envoi calculé en fonction des deux derniers critères
		Date de livraison estimée

	Administrateur :
		N° de commande
		Nom du livreur
		Date de livraison (estimée)
		Informations clients ( Nom, Prénom, Adresse, N° de Tel)

## Condition pour lancer une livraison :
    Le poids de la livraison < poids max du livreur choisi
    Adresse de livraison acceptée par le livreur

## Stockage :
	Fichier CSV

## Partie utilisateur :
### Fichier d'entrée :
|  numéro de commande   |  id du transporteur  |  id du client  | poids total des articles |
| :-------------------: | :------------------: |  :----------:  |  :--------------------:  |

### Fichier de sortie
|  numéro de commande   |  id du transporteur  |  id du client  |  addresse de livraison  |  date de livraison estimée  |
| :-------------------: | :------------------: |  :----------:  |  :-------------------:  |  :-----------------------:  |

## Partie administrateur :
### Fichier d'entrée :
    Fichier de sortie de la première partie
|  numéro de commande   |  id du transporteur  |  id du client  |  addresse de livraison  |  date de livraison estimée  |
| :-------------------: | :------------------: |  :----------:  |  :-------------------:  |  :-----------------------:  |

### Fichier de sortie :
    Aucun pour le moment