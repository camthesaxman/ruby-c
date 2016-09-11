int __fastcall sub_8136DC0(_BYTE *a1, unsigned __int8 a2, __int16 a3)
{
  _BYTE *v3; // r4@1
  int v5; // [sp+4h] [bp-4h]@0

  v3 = a1;
  if ( a3 )
  {
    StringCopy(a1, gUnknown_08406134[a2]);
    StringAppend(v3, &gUnknown_084115C2);
  }
  else
  {
    StringCopy(a1, "Шушмнтл");
  }
  return v5;
}
