int __fastcall sub_80C4674(_BYTE *a1, _BYTE *a2)
{
  int v2; // r4@1
  int v4; // [sp+4h] [bp-4h]@0

  v2 = (int)a1;
  StringCopy(a1, a2);
  if ( *(_BYTE *)v2 == 252 && *(_BYTE *)(v2 + 1) == 21 )
    ConvertInternationalString(v2, 1);
  return v4;
}
