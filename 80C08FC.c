int __fastcall sub_80C08FC(_BYTE *a1, _BYTE *a2, unsigned __int8 a3)
{
  int v3; // r5@1
  unsigned int v4; // r4@1
  int v6; // [sp+8h] [bp-4h]@0

  v3 = (int)a1;
  v4 = a3;
  StringCopy(a1, a2);
  if ( v4 <= 1 )
    ConvertInternationalString(v3, 1);
  return v6;
}
