int __fastcall sub_80C5B1C(unsigned __int16 a1, unsigned __int16 *a2)
{
  unsigned __int16 *v2; // r5@1
  int v3; // r4@1
  int v4; // r0@1
  int v6; // [sp+8h] [bp-4h]@0

  v2 = a2;
  v3 = a1;
  v4 = sub_80C5994(a1, *a2);
  sub_80C5A08((char *)&gStringVar3, v4);
  StringCopy(&gStringVar1, &gSpeciesNames[11 * v3]);
  if ( *v2 == 33024 )
    StringCopy(&gStringVar2, &gUnknown_0842C9E1);
  else
    StringCopy(&gStringVar2, (_BYTE *)0x2024EA4);
  return v6;
}
