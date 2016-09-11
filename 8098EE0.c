int __fastcall sub_8098EE0(unsigned __int8 a1, unsigned __int16 a2, int a3)
{
  int v3; // r6@1
  unsigned int v4; // r2@1
  unsigned int v5; // r10@1
  unsigned int v6; // r9@1
  int v7; // r4@2
  _BYTE *v8; // r2@2
  int v9; // r5@2
  unsigned int v10; // r0@3
  int v11; // r0@3
  unsigned __int16 v13; // [sp+8h] [bp-3Ch]@1
  unsigned int v14; // [sp+Ch] [bp-38h]@1
  int v15; // [sp+10h] [bp-34h]@1
  int v16; // [sp+14h] [bp-30h]@1
  signed int v17; // [sp+1Ch] [bp-28h]@1

  v3 = a1;
  v13 = a2;
  v4 = a3 << 16;
  v15 = 44;
  v5 = (1572864 * (unsigned int)a1 + 6553600) >> 16;
  v14 = v4 >> 16;
  v16 = 0;
  v6 = 0;
  v17 = (v5 - (a2 + 1) * ((signed int)v4 >> 16)) << 16;
  do
  {
    v7 = 80 * v3 + 33751204;
    v9 = (unsigned __int16)GetBoxMonData((unsigned int *)(2400 * v200117D + v7), 65, (_BYTE *)0x20300A4);
    if ( v9 )
    {
      v10 = GetBoxMonData((unsigned int *)(2400 * v200117D + v7), 0, v8);
      v11 = sub_8099AFC(v9, v10, v17 >> 16, (signed __int16)v15);
      *(_DWORD *)(4 * v3 + 0x2001050) = v11;
      if ( v11 )
      {
        *(_WORD *)(v11 + 48) = v13;
        *(_WORD *)(*(_DWORD *)(4 * v3 + 0x2001050) + 50) = v14;
        *(_WORD *)(*(_DWORD *)(4 * v3 + 0x2001050) + 52) = v5;
        *(_DWORD *)(*(_DWORD *)(4 * v3 + 0x2001050) + 28) = sub_8098E24;
        v16 = (v16 + 1) & 0xFF;
      }
    }
    v3 = (v3 + 6) & 0xFF;
    v15 = (v15 + 24) & 0xFFFF;
    v6 = (v6 + 1) & 0xFFFF;
  }
  while ( v6 <= 4 );
  return v16;
}
