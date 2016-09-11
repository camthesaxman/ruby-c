int __fastcall sub_8046128(signed int *a1, _DWORD *a2, int a3)
{
  signed int *v3; // r5@1
  int v4; // r8@1
  unsigned int v5; // r3@1
  unsigned int v6; // r6@1
  signed int v7; // r4@1
  char v9[8]; // [sp+8h] [bp-2Ch]@1
  char v10; // [sp+10h] [bp-24h]@2
  int v11; // [sp+30h] [bp-4h]@3

  v3 = a1;
  v4 = a3;
  sub_804602C(*a1, v3[1], v3[2], a2, v9, 6u);
  v5 = 0;
  v6 = *((_BYTE *)v3 + 12) << 27;
  v7 = v3[4];
  do
  {
    *((_WORD *)&v10 + v5) = (v6 >> 15) | (v7 + (unsigned __int8)v9[v5]);
    v5 = (v5 + 1) & 0xFF;
  }
  while ( v5 <= 5 );
  CpuSet(&v10, v4, 6);
  return v11;
}
