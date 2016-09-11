int __fastcall sub_80B1CFC(unsigned __int8 a1)
{
  unsigned __int8 v1; // r5@1
  int *v2; // r4@1
  signed int v3; // r0@1
  int v4; // r0@9
  __int16 v5; // r0@11
  int v7; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 14);
  if ( v3 == 1 )
  {
    if ( !(v201920A & 0x40) )
    {
      v4 = *((_BYTE *)v2 + 8);
      nullsub_18();
_080B1D44:
      ++*((_WORD *)v2 + 14);
      return v7;
    }
  }
  else
  {
    if ( v3 <= 1 )
    {
      if ( *((_WORD *)v2 + 14) )
        return v7;
      sub_80B1B14();
      goto _080B1D44;
    }
    if ( v3 == 2 )
    {
      v5 = *((_WORD *)v2 + 15);
      *((_WORD *)v2 + 15) = v5 + 1;
      if ( v5 > 20 )
      {
        *((_WORD *)v2 + 15) = 0;
        sub_80B1928();
        v201920A &= 0xDFu;
        DestroyTask(v1);
      }
    }
  }
  return v7;
}
