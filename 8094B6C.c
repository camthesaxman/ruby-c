int __fastcall sub_8094B6C(unsigned __int8 a1, unsigned __int8 a2, unsigned __int8 a3)
{
  int v3; // r4@1
  int v4; // r5@1
  int v5; // r6@1
  unsigned __int8 v6; // r7@1
  int v7; // r4@2
  signed int v8; // r2@2
  char *v9; // r12@2
  char *v10; // r3@2
  _BYTE *v11; // r3@3
  int v12; // r2@4
  unsigned __int8 v14; // [sp+0h] [bp-1Ch]@2
  char v15; // [sp+1h] [bp-1Bh]@10
  char v16; // [sp+2h] [bp-1Ah]@10
  char v17; // [sp+3h] [bp-19h]@10
  char v18; // [sp+4h] [bp-18h]@10
  char v19; // [sp+5h] [bp-17h]@10
  int v20; // [sp+18h] [bp-4h]@11

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = 0;
  if ( sub_806B528() << 24 )
  {
    v7 = 3 * v3 + 33644652;
    v8 = 0;
    v9 = (char *)(&v14 + v5);
    v10 = (char *)&v14;
    do
    {
      *v10 = *(_BYTE *)(v7 + v8) >> 4;
      v11 = v10 + 1;
      *v11 = *(_BYTE *)(v7 + v8) & 0xF;
      v10 = v11 + 1;
      ++v8;
    }
    while ( v8 <= 2 );
    v12 = 0;
    if ( v14 == v4 )
    {
      v6 = v14;
      v14 = *v9;
    }
    else
    {
      while ( ++v12 <= 5 )
      {
        if ( *(&v14 + v12) == v4 )
        {
          v6 = *(&v14 + v12);
          *(&v14 + v12) = *v9;
          break;
        }
      }
    }
    if ( v12 != 6 )
    {
      *v9 = v6;
      *(_BYTE *)v7 = 16 * v14 | v15;
      *(_BYTE *)(v7 + 1) = 16 * v16 | v17;
      *(_BYTE *)(v7 + 2) = 16 * v18 | v19;
    }
  }
  return v20;
}
