signed int __fastcall sub_80416E8(int a1, unsigned __int8 a2)
{
  int v2; // r6@1
  int v3; // r4@1
  signed int v4; // r5@1

  v2 = a1;
  v3 = a2;
  v4 = (unsigned __int8)sub_80416A0(a1, a2);
  pokemon_get_nick_((unsigned int *)(v2 + 80 * v3), (int)&gStringVar1);
  ConvertIntToDecimalStringN((char *)&gStringVar2, v4, 0, 2);
  return v4;
}
