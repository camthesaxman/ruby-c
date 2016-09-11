int sub_8104F8C()
{
  int v0; // r4@1
  int v1; // r5@1
  signed int v2; // r0@2
  int v3; // r4@3
  int v4; // r5@3
  signed int v5; // r0@4
  int v7; // [sp+Ch] [bp-4h]@0

  LOWORD(v0) = 203;
  LOWORD(v1) = 1;
  do
  {
    sub_8104FF4((signed __int16)v0, 23, 0, (signed __int16)v1);
    v2 = 655360 * (signed __int16)v1;
    v0 = ((signed __int16)v0 - 7) & 0xFFFF;
    v1 = 10 * (signed __int16)v1 & 0xFFFF;
  }
  while ( v2 >> 16 <= 9999 );
  LOWORD(v3) = 235;
  LOWORD(v4) = 1;
  do
  {
    sub_8104FF4((signed __int16)v3, 23, 1, (signed __int16)v4);
    v5 = 655360 * (signed __int16)v4;
    v3 = ((signed __int16)v3 - 7) & 0xFFFF;
    v4 = 10 * (signed __int16)v4 & 0xFFFF;
  }
  while ( v5 >> 16 <= 9999 );
  return v7;
}
