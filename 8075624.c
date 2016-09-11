int sub_8075624()
{
  __int16 *v0; // r1@1
  signed int v1; // r2@1
  __int16 *v2; // r0@3
  int v4; // [sp+18h] [bp-4h]@0

  v202F7B0 = 0;
  v202F7B1 = 0;
  v202F7B2 = 0;
  v202F7B3 = 0;
  v202F7B4 = 0;
  v202F7B8 = 0;
  v202F7BC = 0;
  v202F7BE = 0;
  v0 = &word_3004B10;
  v1 = 7;
  do
  {
    *v0;
    *v0 = -1;
    ++v0;
    --v1;
  }
  while ( v1 >= 0 );
  v2 = &word_3004B0E;
  do
  {
    *v2 = 0;
    --v2;
  }
  while ( (signed int)v2 >= (signed int)&word_3004B00 );
  v202F7C2 = -1;
  v202F7C3 = -1;
  v202F7C4 = 0;
  v202F7C5 = 0;
  v202F7C6 = 0;
  v202F7C8 = 0;
  v202F7C9 = 0;
  v202F7D2 = 0;
  return v4;
}
