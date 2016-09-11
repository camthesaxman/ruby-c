int __fastcall sub_80BD3DC(int a1, int a2, int a3)
{
  int v3; // r10@1
  int v4; // r9@1
  int v5; // r8@1
  int v6; // r5@1
  unsigned int v7; // r6@1
  int v9; // [sp+1Ch] [bp-4h]@0

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = 0;
  v7 = 0;
  do
  {
    if ( !(v6 & 1) && (unsigned __int8)sub_80BD358(v3 + 160 * v7) == 1 )
    {
      sub_80BB4AC(v3 + 160 * v7);
      v6 |= 1u;
    }
    if ( !(v6 & 2) && (unsigned __int8)sub_80BD358(v4 + 160 * v7) == 1 )
    {
      sub_80BB4AC(v4 + 160 * v7);
      v6 = (v6 | 2) & 0xFF;
    }
    if ( !(v6 & 4) && (unsigned __int8)sub_80BD358(v5 + 160 * v7) == 1 )
    {
      sub_80BB4AC(v5 + 160 * v7);
      v6 = (v6 | 4) & 0xFF;
    }
    if ( v6 == 7 )
      break;
    v7 = (v7 + 1) & 0xFF;
  }
  while ( v7 <= 0x13 );
  return v9;
}
