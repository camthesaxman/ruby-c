int __fastcall sub_8099200(unsigned __int8 a1, int a2, int a3)
{
  int v3; // r8@1
  int v4; // r5@1
  int v5; // r2@1
  int v6; // r0@1
  int v7; // r0@1
  int v8; // r2@1
  unsigned int v9; // r7@1
  unsigned int v10; // r6@1
  int v11; // r2@2
  int v12; // r5@2
  int v13; // r0@3
  int v14; // r0@3
  unsigned int i; // r6@7
  int v17; // [sp+1Ch] [bp-4h]@0

  v3 = a1;
  v4 = (unsigned __int16)GetMonData((int)dword_3004360, 65, a3);
  v6 = GetMonData((int)dword_3004360, 0, v5);
  v7 = sub_8099AFC(v4, v6, 104, 64);
  v8 = 4152;
  v2001038 = v7;
  v9 = 1;
  v10 = 1;
  do
  {
    v12 = (unsigned __int16)GetMonData((int)&dword_3004360[25 * v10], 65, v8);
    if ( v12 )
    {
      v13 = GetMonData((int)&dword_3004360[25 * v10], 0, v11);
      v14 = sub_8099AFC(v12, v13, 152, (signed int)(1572864 * (v10 - 1) + 0x100000) >> 16);
      v8 = 4 * v10;
      *(_DWORD *)(4 * v10 + 0x2001038) = v14;
      v9 = (v9 + 1) & 0xFFFF;
    }
    else
    {
      v8 = 4152;
      *(_DWORD *)(4 * v10 + 0x2001038) = 0;
    }
    v10 = (v10 + 1) & 0xFFFF;
  }
  while ( v10 <= 5 );
  if ( !v3 )
  {
    for ( i = 0; i < v9; i = (i + 1) & 0xFFFF )
    {
      *(_WORD *)(*(_DWORD *)(4 * i + 0x2001038) + 34) -= 160;
      *(_BYTE *)(*(_DWORD *)(4 * i + 0x2001038) + 62) |= 4u;
    }
  }
  return v17;
}
