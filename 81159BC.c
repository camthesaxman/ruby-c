int __fastcall sub_81159BC(unsigned __int8 a1)
{
  int v1; // r6@1
  signed int v2; // r2@2
  int *v3; // r12@2
  int v4; // r7@2
  int v5; // r0@3
  int v6; // r0@7
  int v7; // r4@9
  int v9; // [sp+10h] [bp-4h]@0

  v1 = a1;
  if ( v2019008 & 0x20 )
  {
    v2 = 11;
    v3 = dword_3004B20;
    v4 = 4 * a1;
    if ( v2019008 & 0x800 )
    {
      do
      {
        v5 = (v2 << 16) + 0x10000;
        v2 = (unsigned int)v5 >> 16;
      }
      while ( v5 >> 16 <= 13 && v2019008 & *((_DWORD *)&unk_83F8C08 + 5 * (v5 >> 16)) );
    }
  }
  else
  {
    v2 = 6;
    v3 = dword_3004B20;
    v4 = 4 * a1;
    if ( v2019008 & 0x40 )
    {
      do
      {
        v6 = (v2 << 16) + 0x10000;
        v2 = (unsigned int)v6 >> 16;
      }
      while ( v6 >> 16 <= 9 && v2019008 & *((_DWORD *)&unk_83F8C08 + 5 * (v6 >> 16)) );
    }
  }
  v7 = (int)&v3[2 * (v4 + v1)];
  *(_WORD *)(v7 + 16) = v2;
  sub_8116CAC(v1);
  sub_8117158(*(_BYTE *)(v7 + 16));
  sub_811829C(*(_BYTE *)(v7 + 16));
  sub_8116EF8(*(_BYTE *)(v7 + 16));
  *(_WORD *)(v7 + 10) = 0;
  *(_DWORD *)v7 = sub_811597C;
  return v9;
}
