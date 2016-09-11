int __fastcall sub_804FD30(int a1)
{
  unsigned int v1; // r0@1
  signed int v2; // r4@1
  unsigned int v3; // r5@1
  int v4; // r4@7
  signed __int16 *v5; // r5@7
  __int16 v6; // r6@7
  signed __int16 *v7; // r4@10
  signed __int16 v8; // r0@11
  __int16 v9; // r1@12
  int v11; // [sp+10h] [bp-4h]@0

  v1 = a1 << 16;
  v2 = v1 >> 16;
  v3 = v1 >> 16;
  sub_804E290();
  if ( v2 == 17699 )
  {
    v4 = dword_3004854;
    v5 = (signed __int16 *)(dword_3004854 + 86);
    v6 = *(_WORD *)(dword_3004854 + 86);
    if ( (signed int)*(_WORD *)(dword_3004854 + 86) > 1499 )
    {
      *v5 = v6 + 128 / gUnknown_082165DA[*(_BYTE *)(dword_3004854 + 136)];
      sub_8051AC8(v4 + 324, (*v5 / 100 - 10) & 0xFFFF);
      sub_8051AC8(dword_3004854 + 326, (*(_WORD *)(dword_3004854 + 86) / 100 - 10) & 0xFFFF);
    }
    else
    {
      *v5 = v6 + 384 / gUnknown_082165DA[*(_BYTE *)(dword_3004854 + 136)];
    }
  }
  else if ( v2 > 17699 )
  {
    if ( v3 == 21554 )
    {
      v7 = (signed __int16 *)(dword_3004854 + 86);
      if ( (signed int)*(_WORD *)(dword_3004854 + 86) <= 1499 )
      {
        v8 = *(_WORD *)(dword_3004854 + 86) + 256 / gUnknown_082165DA[*(_BYTE *)(dword_3004854 + 136)];
_0804FE5E:
        *v7 = v8;
        return v11;
      }
    }
  }
  else if ( v2 == 9029 )
  {
    v7 = (signed __int16 *)(dword_3004854 + 86);
    v9 = *(_WORD *)(dword_3004854 + 86) - 256 / gUnknown_082165DA[*(_BYTE *)(dword_3004854 + 136)];
    *(_WORD *)(dword_3004854 + 86) = v9;
    if ( v9 <= 127 )
    {
      v8 = 128;
      goto _0804FE5E;
    }
  }
  return v11;
}
