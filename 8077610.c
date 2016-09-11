int sub_8077610()
{
  int v0; // r1@1
  int v1; // r6@1
  int v2; // r0@1
  __int16 *v3; // r4@2
  int v4; // r3@2
  int v5; // r2@3
  unsigned __int8 v6; // r0@4
  int v7; // r1@4
  int v9; // [sp+Ch] [bp-4h]@0

  v0 = v202F7A4++;
  v1 = *v202F7A4 + (*(_BYTE *)(v202F7A4 + 1) << 8) + (*(_BYTE *)(v202F7A4 + 2) << 16) + (*(_BYTE *)(v202F7A4 + 3) << 24);
  v202F7A4 = v0 + 5;
  v2 = *(_BYTE *)(v0 + 5);
  v202F7A4 = v0 + 6;
  if ( v2 )
  {
    v3 = word_3004B00;
    v4 = v2;
    do
    {
      v5 = v202F7A4;
      *v3 = *v202F7A4 | (unsigned __int16)(*(_BYTE *)(v202F7A4 + 1) << 8);
      v202F7A4 = v5 + 2;
      ++v3;
      --v4;
    }
    while ( v4 );
  }
  v6 = CreateTask(v1, 1);
  call_via_r6(v6, v7);
  ++v202F7B3;
  return v9;
}
