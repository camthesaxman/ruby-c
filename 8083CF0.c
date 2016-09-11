int unref_sub_8083CF0()
{
  int v0; // r4@1
  signed int v1; // r5@1
  __int16 *v2; // r7@1
  int v3; // r4@1
  int v5; // [sp+10h] [bp-4h]@0

  v0 = v4000128 << 26 >> 30;
  byte_3004DA0 = -1;
  StringAppend(&byte_3004DA0, &gUnknown_0839B24A);
  v1 = 0;
  v2 = &word_3002910[v0 ^ 1];
  v3 = 0;
  do
  {
    if ( ((signed int)(unsigned __int16)*v2 >> v1) & 1 )
      StringAppend(&byte_3004DA0, &gUnknown_0839B22C[v3]);
    v3 += 3;
    ++v1;
  }
  while ( v1 <= 9 );
  return v5;
}
