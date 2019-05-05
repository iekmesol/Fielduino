# Fielduino

Στοιχεία έργου
Όνομα έργου: Fielduino (Digital Farming)
Όνομα σχολείου: ΙΕΚ Μεσολογγίου (http://iekmesol.sch.gr/)
Βαθμίδα εκπαίδευσης: Μεταδευτεροβάθμια
Link στο github: https://github.com/iekmesol/Fielduino
Link έργου: https://robotics.ellak.gr/robotics_participant/diek-mesolongiou/
 

Δημιουργοί: Ειδικότητα Τεχνικός Η/Υ στο πλαίσιο του μαθήματος Διαθεματική εργασία (εργαστήριο) του Δ’ Εξαμήνου – 2019Α

Μαθητευόμενοι:

Κούστας Γρηγόριος
Παπαλόπουλος Ιωάννης
Ρεβέκη Γεωργία
Τίτας Θεόδωρος
Μωραΐτης Γεώργιος
Εκπαιδευτής: Καραχρήστος Χριστόφορος

Άδεια χρήσης: GNU General Public License v3.0

Εισαγωγή

Ο πρωτογενής τομέας συνδέεται καθημερινά όλο και περισσότερο με την ανάπτυξη των νέων τεχνολογιών. Μεγάλες εταιρείες του χώρου της τεχνολογίας διαβλέπουν το μέλλον της «έξυπνης παραγωγής και καλλιέργειας». Η έξυπνη γεωργία (smart farming) αποτελεί μια καινοτόμα προσέγγιση για τη διαχείριση των γεωργικών δραστηριοτήτων με χρήση νέων τεχνολογιών. Μπορεί να οδηγήσει σε σημαντική μείωση του κόστους μαζί με σημαντική ποιοτική και ποσοτική βελτίωση της γεωργικής παραγωγής. Αξιοποιεί τις σύγχρονες τεχνολογίες και την επιστημονική γνώση με τέτοιο τρόπο ώστε να λαμβάνονται οι πιο κατάλληλες αποφάσεις σχετικά με την παραγωγή, ωφελώντας έτσι την οικονομία και το περιβάλλον. Ένα τέτοιο έργο μπορεί να βοηθήσει την τοπική κοινωνία του Μεσολογγίου, της ευρύτερης περιοχής αλλά και των περισσοτέρων περιοχών της χώρας μας οι οποίες είναι αγροτικές περιοχές και η οικονομία τους στηρίζεται σε μεγάλο βαθμό στην αγροτική παραγωγή.

Μερικά από τα βασικά πλεονεκτήματά της είναι τα εξής:

Μείωση στη χρήση φυτοφαρμάκων, λιπασμάτων και νερού άρδευσης
Αποτελεσματική αντιμετώπιση των απειλών που επηρεάζουν την παραγωγή
Ποιοτική και ποσοτική βελτίωση της παραγωγής
Προστιθέμενη αξία στα γεωργικά προϊόντα
Μείωση των περιβαλλοντικών επιπτώσεων
Συμμόρφωση με το ρυθμιστικό πλαίσιο της ΕΕ
Περιγραφή του έργου

Το προτεινόμενο έργο στόχο έχει να δώσει τη δυνατότητα σε κάποιον που ασχολείται με αγροτικές εργασίες να αναπτύξει ένα σύστημα μέσω του οποίου θα μπορεί να παρακολουθεί εξ αποστάσεως μέσω διαδικτύου και καθ’ όλη τη διάρκεια της ημέρας, διάφορες περιβαλλοντικές (και μη) τιμές που τον ενδιαφέρουν σχετικά με τις καλλιέργειές του και σχετίζονται με μετρήσεις από αισθητήρες. Στη συγκεκριμένη υλοποίηση χρησιμοποιήθηκαν οι μετρήσεις από τρείς περιβαλλοντικούς δείκτες οι οποίες είναι:

  Θερμοκρασία αέρα,
  Υγρασία αέρα,
  Υγρασία εδάφους.
  
Θα πρέπει να τονιστεί πως αυτοί οι μετρούμενοι δείκτες είναι ενδεικτικοί και μπορούν πολύ εύκολα να αντικατασταθούν από άλλες μετρήσεις ή ακόμη και να επεκταθούν. Παράλληλα θα πρέπει να τονιστεί πως το συγκεκριμένο έργο εστιάζει στην δημιουργία ενός οδηγού υλοποίησης ενός τέτοιου συστήματος και όχι της πλήρους ανάπτυξης ενός τελικού παραγωγικού ολοκληρωμένου συστήματος. Αυτό σημαίνει πως για τις μετρήσεις χρησιμοποιούνται οι τιμές που λαμβάνονται από ένα σημείο ενδιαφέροντος σε ένα χωράφι δηλαδή καταγράφονται μια μέτρηση από κάθε αισθητήρα.
Το συγκεκριμένο έργο μπορεί να επεκταθεί και να συλλέγει τιμές από διάσπαρτους αισθητήρες σε κάποια γεωργική έκταση και να εμπλουτιστεί κατάλληλα με κάποιο μοντέλο επεξεργασίας δεδομένων που θα δίνει τη δυνατότητα στο χρήστη να εξάγει περισσότερο χρήσιμα συμπεράσματα. Για παράδειγμα μπορεί ο ενδιαφερόμενος να συλλέγει τιμές υγρασίας εδάφους από διάφορα σημεία και να τα επεξεργάζεται κατάλληλα ώστε να εξάγει μέγιστες και ελάχιστες τιμές, μέσους όρους τιμών κτλ.

Χρονοπρογραμματισμός έργου

Την ανάπτυξη του έργου τη χωρίσαμε σε 3 πακέτα εργασίας. Στο πρώτο πακέτο εργασίας ασχοληθήκαμε με την ανάπτυξη του υλικού το οποίο απαιτείται και το οποίο περιλαμβάνει τη διασύνδεση των αισθητήρων με τον μικροελεγκτή Arduino UNO έτσι ώστε να καταγράφονται οι τιμές από τους αισθητήρες. Στο δεύτερο πακέτο εργασίας ασχοληθήκαμε με την διασύνδεση του προηγούμενου συστήματος με τη διεπαφή του χρήση η οποία θα είναι μια web-based εφαρμογή και από την οποία ο χρήστης θα μπορεί να βλέπει τις τιμές που καταγράφουν οι αισθητήρες αλλά και να αλληλοεπιδρά. Τα δύο αυτά πακέτα εργασίας ολοκληρώθηκαν παράλληλα καθώς αποτελούν ανεξάρτητα συστήματα. Στο τρίτο πακέτο εργασίας το οποίο ξεκίνησε αφού ολοκληρώθηκαν τα δύο πρώτα πακέτα εργασίας προσπαθήσαμε να τα συνδέσουμε όλα αυτά σε ένα ενιαίο σύστημα του οποίου τα επιμέρους συστήματα επικοινωνούν μεταξύ τους μέσω ασύρματης σύνδεσης. Τέλος ασχοληθήκαμε με την τεκμηρίωση του project.


Κόστος υλοποίησης

Arduino UNO: €7-20
Αισθητήρας Θερμοκρασίας-Υγρασίας DHT11: €4.00
SparkFun Soil Moisture Sensor (with Screw Terminals): €6.99
Οδηγίες υλοποίησης


