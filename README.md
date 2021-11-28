## Deux pages à développé :
	-Lors d'une commande
		Ajout d'une page avec l'équipe qui gère les commandes afin de permettre le choix de l'utilisateur
		de choisir le livreur de son choix en fonction du pays de livraison, afficher les délais de 
		livraison.
	
	-Interface d'administration
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

Stockage :
	Fichier CSV


# Fichier d'entrée
|  order_nb   |  transporter_id  |  schedule_time  |  address  |  client_id  |
| :---------: | :--------------: |  :-----------:  |  :-----:  |  :-------:  |

# Fichier de sortie
|  order_nb   |  transporter_id  |  schedule_time  |  address  |  client_id  |
| :---------: | :--------------: |  :-----------:  |  :-----:  |  :-------:  |