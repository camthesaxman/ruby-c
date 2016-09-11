int __fastcall sub_80F85FC(int a1, signed int a2)
{
  int v2; // r7@1
  signed int v3; // r6@1
  signed int i; // r5@1
  signed int v5; // r5@4
  int v6; // r4@5
  int v7; // r0@5
  char *v8; // r4@5
  char v9; // r2@5
  char *v10; // r0@5
  int v12; // [sp+10h] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  for ( i = 0; i < a2; ++i )
    *(_BYTE *)(a1 + i) = i;
  if ( a2 > 0 )
  {
    v5 = a2;
    do
    {
      v6 = (unsigned __int16)Random() % v3;
      v7 = (unsigned __int16)Random() % v3;
      v8 = (char *)(v2 + v6);
      v9 = *v8;
      v10 = (char *)(v2 + v7);
      *v8 = *v10;
      *v10 = v9;
      --v5;
    }
    while ( v5 );
  }
  return v12;
}
