int __fastcall sub_8147E40(unsigned __int8 a1)
{
  int v1; // r7@1
  unsigned int *v2; // r5@1
  int v3; // r4@1
  unsigned __int8 v4; // r0@1
  int v6; // [sp+10h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004360[25 * v2039310];
  v3 = 8 * v203855E + 33709868;
  v4 = GetNature((int)v2);
  v2039312 = sub_810CAE4(v4, v3);
  GetMonNickname((int)v2, (int)gStringVar1);
  sub_810CB44(v3, gStringVar2);
  if ( v2039312 )
  {
    if ( v2039312 <= 0 )
      StringExpandPlaceholders(gStringVar4, (unsigned __int8 *)&gUnknown_0840EC75);
    else
      StringExpandPlaceholders(gStringVar4, (unsigned __int8 *)&gUnknown_0840EC5C);
  }
  else
  {
    StringExpandPlaceholders(gStringVar4, (unsigned __int8 *)&gUnknown_0840EC4B);
  }
  MenuPrintMessage((int)gStringVar4, 1, 0xFu);
  dword_3004B20[10 * v1] = (int)sub_8147E10;
  return v6;
}
