#include <bits/stdc++.h>
using namespace std;
string mem[53][3] = {
	{"00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000002","2","3"},
	{"00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000006","1","2"},
	{"00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000030","5","12"},
	{"00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000210","35","96"},
	{"00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000002310","385","1152"},
	{"00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000030030","715","2304"},
	{"00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000510510","12155","41472"},
	{"00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000009699690","46189","165888"},
	{"00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000223092870","1062347","3981312"},
	{"00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000006469693230","30808063","119439360"},
	{"00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000200560490130","955049953","3822059520"},
	{"00000000000000000000000000000000000000000000000000000000000000000000000000000000000000007420738134810","1859834119","7644119040"},
	{"00000000000000000000000000000000000000000000000000000000000000000000000000000000000000304250263527210","76253198879","321052999680"},
	{"00000000000000000000000000000000000000000000000000000000000000000000000000000000000013082761331670030","298080686527","1284211998720"},
	{"00000000000000000000000000000000000000000000000000000000000000000000000000000000000614889782588491410","14009792266769","61642175938560"},
	{"00000000000000000000000000000000000000000000000000000000000000000000000000000000032589158477190044730","742518990138757","3328677500682240"},
	{"00000000000000000000000000000000000000000000000000000000000000000000000000000001922760350154212639070","43808620418186663","199720650040934400"},
	{"00000000000000000000000000000000000000000000000000000000000000000000000000000117288381359406970983270","86204059532560853","399441300081868800"},
	{"00000000000000000000000000000000000000000000000000000000000000000000000000007858321551080267055879090","339745411098916303","1597765200327475200"},
	{"00000000000000000000000000000000000000000000000000000000000000000000000000557940830126698960967415390","24121924188023057513","115039094423578214400"},
	{"00000000000000000000000000000000000000000000000000000000000000000000000040729680599249024150621323470","47591904479072518877","230078188847156428800"},
	{"00000000000000000000000000000000000000000000000000000000000000000000003217644767340672907899084554130","3759760453846728991283","18406255107772514304000"},
	{"00000000000000000000000000000000000000000000000000000000000000000000267064515689275851355624017992790","312060117669278506276489","1546125429052891201536000"},
	{"00000000000000000000000000000000000000000000000000000000000000000023768741896345550770650537601358310","27773350472565787058607521","139151288614760208138240000"},
	{"00000000000000000000000000000000000000000000000000000000000000002305567963945518424753102147331756070","2694014995838881344684929537","13636826284246500397547520000"},
	{"00000000000000000000000000000000000000000000000000000000000000232862364358497360900063316880507363070","272095514579727015813177883237","1390956280993143040549847040000"},
	{"00000000000000000000000000000000000000000000000000000000000023984823528925228172706521638692258396210","2155833692439375586827486305647","11127650247945144324398776320000"},
	{"00000000000000000000000000000000000000000000000000000000002566376117594999414479597815340071648394470","230674205091013187790541034704229","1201786226778075587035067842560000"},
	{"00000000000000000000000000000000000000000000000000000000279734996817854936178276161872067809674997230","25143488354920437469168972782760961","132196484945588314573857462681600000"},
	{"00000000000000000000000000000000000000000000000000000031610054640417607788145206291543662493274686990","2841214184106009434016093924451988593","15070399283797067861419750745702400000"},
	{"00000000000000000000000000000000000000000000000000004014476939333036189094441199026045136645885247730","360834201381463198120043928405402551311","1929011108326024686261728095449907200000"},
	{"00000000000000000000000000000000000000000000000000525896479052627740771371797072411912900610967452630","47269280380971678953725754621107734221741","254629466299035258586548108599387750400000"},
	{"00000000000000000000000000000000000000000000000072047817630210000485677936198920432067383702541010310","281560496182309565941757755786598242972979","1527776797794211551519288651596326502400000"},
	{"00000000000000000000000000000000000000000000010014646650599190067509233131649940057366334653200433090","39136908969341029665904328054337155773244081","213888751691189617212700411223485710336000000"},
	{"00000000000000000000000000000000000000000001492182350939279320058875736615841068547583863326864530410","5831399436431813420219744880096236210213368069","32083312753678442581905061683522856550400000000"},
	{"00000000000000000000000000000000000000000225319534991831177328890236228992001350685163362356544091910","880541314901203826453181476894531667742218578419","4876663538559123272449569375895474195660800000000"},
	{"00000000000000000000000000000000000000035375166993717494840635767087951744212057570647889977422429870","1749936537208721528520879643954955339690231858377","9753327077118246544899138751790948391321600000000"},
	{"00000000000000000000000000000000000005766152219975951659023630035336134306565384015606066319856068810","6957064769878575832900082486942871228524580315011","39013308308472986179596555007163793565286400000000"},
	{"00000000000000000000000000000000000962947420735983927056946215901134429196419130606213075415963491270","1161829816569722164094313775319459495163604912606837","6554235795823461678172221241203517318968115200000000"},
	{"00000000000000000000000000000000166589903787325219380851695350896256250980509594874862046961683989710","6930915802295239116838492521733327333217367237275269","39325414774940770069033327447221103913808691200000000"},
	{"00000000000000000000000000000029819592777931214269172453467810429868925511217482600306406141434158090","1240633928610847801914090161390265592645908735472273151","7078574659489338612425998940499798704485564416000000000"},
	{"00000000000000000000000000005397346292805549782720214077673687806275517530364350655459511599582614290","224554741078563452146450319211638072268909481120481440331","1288300588027059627461531807170963364216372723712000000000"},
	{"00000000000000000000000001030893141925860008499560888835674370998623848299590975192766715520279329390","42889955546005619359972010969422871803361710894011955103221","247353712901195448472614106976824965929543562952704000000000"},
	{"00000000000000000000000198962376391690981640415251545285153602734402721821058212203976095413910572270","85337746601846232334789671310294992351018661881900075617749","494707425802390896945228213953649931859087125905408000000000"},
	{"00000000000000000000039195588149163123383161804554421175259738677336198748467804183290796540382737190","16811536080563707769953565248128113493150676390734314896696553","97952070308873397595155186362822686508099250929270784000000000"},
	{"00000000000000000007799922041683461553249199106329813876687996789903550945093032474868511536164700810","3345495680032177846220759484377494585136984601756128664442614047","19590414061774679519031037272564537301619850185854156800000000000"},
	{"00000000000000001645783550795210387735581011435590727981167322669649249414629852197255934130751870910","13318860160128104255709061343465119952149127376802700909384746489","78361656247098718076124149090258149206479400743416627200000000000"},
	{"00000000000000367009731827331916465034565550136732339800312955331782619462457039988073311157667212930","2970105815708567249023120679592721749329255405027002302792798467047","17553010999350112849051809396217825422251385766525324492800000000000"},
	{"00000000000083311209124804345037562846379881038241134671040860314654617977748077292641632790457335110","674214020165844765528248394267547837097740976941129522733965252019669","4002086507851825729583812542337664196273315954767773984358400000000000"},
	{"00000000019078266889580195013601891820992757757219839668357012055907516904309700014933909014729740190","154395010617978451305968882287268454695382683719518660706078042712504201","920479896805919917804276884737662765142862669596588016402432000000000000"},
	{"00000004445236185272185438169240794291312557432222642727183809026451438704160103479600800432029464270","35974037473988979154290749572933549944024165306647847944516183952013478833","215392295852585260766200791028613087043429864685601595838169088000000000000"},
	{"00001062411448280052319722448549835623701226301211611796930357321893850294264731624591303255041960530","8597794956283366017875489147931118436621775508288835658739367964531221441087","51694151004620462583888189846867140890423167524544383001160581120000000000000"},
	{"00256041159035492609053110100510385311995538591998443060216114576417920917800321526504084465112487730","2072068584464291210307992884651399543225847897497609393756187679452024367301967","12509984543118151945300941942941848095482406540939740686280860631040000000000000"},
};
int main() {
	int T;
	cin >> T;
	while (T --) {
		string n;
		cin >> n;
		if (n == "1") {
			cout << "1/1" << endl;
			continue;
		}
		while (n.length() < 101) {
			n = "0" + n;
		}
		int ptr = 0;
		while (ptr < 52) {
			if (mem[ptr+1][0] <= n) ptr ++;
			else break;
		}
		cout << mem[ptr][1] << "/" << mem[ptr][2] << "\n";
	}
	return 0;
}
