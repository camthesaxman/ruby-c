int sub_8075BB8()
{
  int v0; // r1@1
  int v1; // r6@1
  int v2; // r7@1
  int v3; // r0@1
  __int16 *v4; // r4@2
  int v5; // r3@2
  int v6; // r2@3
  unsigned __int8 v7; // r0@4
  int v8; // r1@4
  int v10; // [sp+10h] [bp-4h]@0

  v0 = v202F7A4++;
  v1 = *v202F7A4 + (*(_BYTE *)(v202F7A4 + 1) << 8) + (*(_BYTE *)(v202F7A4 + 2) << 16) + (*(_BYTE *)(v202F7A4 + 3) << 24);
  v202F7A4 = v0 + 5;
  v2 = *(_BYTE *)(v0 + 5);
  v202F7A4 = v0 + 6;
  v3 = *(_BYTE *)(v0 + 6);
  v202F7A4 = v0 + 7;
  if ( v3 )
  {
    v4 = &word_3004B00;
    v5 = v3;
    do
    {
      v6 = v202F7A4;
      *v4 = *v202F7A4 | (unsigned __int16)(*(_BYTE *)(v202F7A4 + 1) << 8);
      v202F7A4 = v6 + 2;
      ++v4;
      --v5;
    }
    while ( v5 );
  }
  v7 = CreateTask(v1, v2);
  call_via_r6(v7, v8);
  ++v202F7B2;
  return v10;
}
