int __fastcall unref_sub_8095A48(char *a1, int a2, unsigned __int8 a3, unsigned __int8 a4, int a5)
{
  char *v5; // r4@1
  int v6; // r5@1
  unsigned __int8 v7; // r8@1
  unsigned __int8 v8; // r7@1
  signed int i; // r6@1
  unsigned int v10; // r3@2
  char v11; // r2@2
  unsigned int v12; // r0@7
  char v14[32]; // [sp+8h] [bp-20h]@3
  int v15; // [sp+24h] [bp-4h]@9

  v5 = a1;
  v6 = a2;
  v7 = a3;
  v8 = a4;
  i = 0;
  do
  {
    v10 = 0;
    v11 = *v5;
    if ( (unsigned __int8)*v5 == 255 )
      break;
    while ( 1 )
    {
      v14[v10] = v11;
      ++v5;
      v10 = (v10 + 1) & 0xFFFF;
      if ( v10 > 3 )
        break;
      v11 = *v5;
      if ( (unsigned __int8)*v5 == 255 )
      {
        if ( !v10 )
          return v15;
        for ( i = 1; v10 <= 3; v14[v12] = 0 )
        {
          v12 = v10;
          v10 = (v10 + 1) & 0xFFFF;
        }
        break;
      }
    }
    v14[v10] = -1;
    sub_8095904(v14, v6, v7, 0x80u, v8, a5);
    v6 += 256;
  }
  while ( !i );
  return v15;
}
