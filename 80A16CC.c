int __fastcall sub_80A16CC(char a1)
{
  unsigned int v1; // r5@2
  int v2; // r3@3
  __int16 *v3; // r4@3
  unsigned int v4; // r5@5
  int v5; // r2@6
  __int16 *v6; // r1@6
  unsigned int v7; // r5@8
  int v8; // r3@9
  __int16 *v9; // r4@9
  unsigned int v10; // r5@11
  int v11; // r2@12
  __int16 *v12; // r1@12
  int v14; // [sp+18h] [bp-4h]@0

  if ( a1 )
  {
    v4 = 0;
    do
    {
      v5 = 2 * v4 + 100690644;
      *(_WORD *)v5 = gUnknown_08E94550[v4] + 4096;
      v6 = &word_8E94590[v4];
      *(_WORD *)(2 * v4 + 0x6006B14) = *v6 + 4096;
      *(_WORD *)(v5 + 128) = *v6 + 4096;
      v4 = (v4 + 1) & 0xFF;
    }
    while ( v4 <= 0x13 );
  }
  else
  {
    v1 = 0;
    do
    {
      v2 = 2 * v1 + 100690644;
      v3 = &gUnknown_08E94510[v1];
      *(_WORD *)v2 = *v3 + 4096;
      *(_WORD *)(2 * v1 + 0x6006B14) = *v3 + 4096;
      *(_WORD *)(v2 + 128) = gUnknown_08E94550[v1] + 4096;
      v1 = (v1 + 1) & 0xFF;
    }
    while ( v1 <= 0x13 );
  }
  if ( a1 )
  {
    v10 = 0;
    do
    {
      v11 = 2 * v10 + 100686548;
      *(_WORD *)v11 = gUnknown_08E94550[v10] + 12288;
      v12 = &word_8E94590[v10];
      *(_WORD *)(2 * v10 + 0x6005B14) = *v12 + 12288;
      *(_WORD *)(v11 + 128) = *v12 + 12288;
      v10 = (v10 + 1) & 0xFF;
    }
    while ( v10 <= 0x13 );
  }
  else
  {
    v7 = 0;
    do
    {
      v8 = 2 * v7 + 100686548;
      v9 = &gUnknown_08E94510[v7];
      *(_WORD *)v8 = *v9 + 12288;
      *(_WORD *)(2 * v7 + 0x6005B14) = *v9 + 12288;
      *(_WORD *)(v8 + 128) = gUnknown_08E94550[v7] + 12288;
      v7 = (v7 + 1) & 0xFF;
    }
    while ( v7 <= 0x13 );
  }
  return v14;
}
