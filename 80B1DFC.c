int __fastcall sub_80B1DFC(unsigned __int8 a1)
{
  int v1; // r5@1
  int v2; // r4@1
  int *v3; // r3@1
  __int16 v4; // r0@1
  int *v5; // r0@5
  int v7; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = 4 * a1;
  v3 = &dword_3004B20[10 * a1];
  v4 = *((_WORD *)v3 + 14);
  *((_WORD *)v3 + 14) = v4 + 1;
  if ( v4 > 6 )
  {
    *((_WORD *)v3 + 14) = 0;
    if ( *((_WORD *)v3 + 15) )
    {
      v40000D4 = 33642496;
      v40000D8 = 100671488;
      v40000DC = -2080373760;
      ++*((_WORD *)v3 + 16);
    }
    else
    {
      v40000D4 = 33646592;
      v40000D8 = 100671488;
      v40000DC = -2080373760;
    }
    v5 = &dword_3004B20[2 * (v2 + v1)];
    *((_WORD *)v5 + 15) ^= 1u;
    if ( *((_WORD *)v5 + 16) == 9 )
    {
      v201920A &= 0x7Fu;
      DestroyTask(v1);
    }
  }
  return v7;
}
