int __fastcall sub_80422C4(unsigned int *a1, int a2, _BYTE *a3)
{
  unsigned int *v3; // r6@1
  _BYTE *v4; // r2@1
  _BYTE *v5; // r2@2
  char v6; // r4@2
  int v8; // [sp+Ch] [bp-4h]@0

  v3 = a1;
  if ( GetBoxMonData(a1, 11, a3) )
  {
    pokemon_get_nick_(v3, (int)&gStringVar1);
    v6 = GetBoxMonData(v3, 3, v5);
    GetBoxMonData(v3, 7, &gStringVar3);
    ConvertInternationalString((int)&gStringVar3, v6);
  }
  if ( GetBoxMonData(v3 + 20, 11, v4) )
    pokemon_get_nick_(v3 + 20, (int)&gStringVar2);
  return v8;
}
