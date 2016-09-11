int __fastcall sub_80BFE24(int a1, int a2, int a3, int a4)
{
  int v4; // r6@2
  int v5; // r7@5
  unsigned __int8 i; // r9@7
  int v7; // r5@8
  int *v9; // [sp+0h] [bp-40h]@1
  int *v10; // [sp+4h] [bp-3Ch]@1
  int *v11; // [sp+8h] [bp-38h]@1
  int *v12; // [sp+Ch] [bp-34h]@1
  int v13; // [sp+10h] [bp-30h]@1
  int v14; // [sp+14h] [bp-2Ch]@1
  int v15; // [sp+18h] [bp-28h]@1
  int v16; // [sp+1Ch] [bp-24h]@1
  int v17; // [sp+3Ch] [bp-4h]@16

  v13 = a1;
  v14 = a2;
  v15 = a3;
  v16 = a4;
  v9 = &v13;
  v10 = &v14;
  v11 = &v15;
  v12 = &v16;
  byte_3000720 = GetLinkPlayerCount();
  do
_080BFE50:
    v4 = 0;
  while ( (unsigned __int8)byte_3000720 <= 0u );
  while ( 1 )
  {
    if ( !v4 )
      v20387E4 = 0;
    byte_3000722 = sub_80C019C(*(&v9)[v4]);
    v5 = v4;
    if ( byte_3000722 != -1 )
    {
      v7 = 0;
      for ( i = v4 + 1; v7 < (unsigned __int8)byte_3000720 - 1; v7 = (v7 + 1) & 0xFF )
      {
        byte_3005D38 = sub_80BF74C(*(&v9)[(v4 + v7 + 1) % (unsigned __int8)byte_3000720]);
        if ( byte_3005D38 != -1
          && (sub_80BFF68(
                (&v9)[(v4 + v7 + 1) % (unsigned __int8)byte_3000720],
                (&v9)[v5],
                (v4 + v7 + 1) % (unsigned __int8)byte_3000720 & 0xFF) & 0xFF) == 1 )
        {
          break;
        }
      }
      if ( v7 == (unsigned __int8)byte_3000720 - 1 )
        sub_80BF55C(*(&v9)[v5], byte_3000722);
      goto _080BFF3C;
    }
    ++v20387E4;
    if ( v20387E4 == (unsigned __int8)byte_3000720 )
      return v17;
    i = v4 + 1;
_080BFF3C:
    v4 = i;
    if ( i >= (unsigned int)(unsigned __int8)byte_3000720 )
      goto _080BFE50;
  }
}
