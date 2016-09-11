int __fastcall sub_8069468(_WORD *a1)
{
  _WORD *v1; // r4@1
  int v2; // r0@1
  __int16 v3; // r0@5
  int v5; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = *a1;
  if ( v2 )
  {
    if ( v2 == 1 && !(dword_3001790 & 0x1000) )
    {
      v3 = *v1 - 1;
      goto _080694AA;
    }
  }
  else if ( dword_3001790 & 0x1000 )
  {
    InTrainerHill(dword_3001790 & 0x1000);
    v3 = *v1 + 1;
_080694AA:
    *v1 = v3;
    return v5;
  }
  return v5;
}
