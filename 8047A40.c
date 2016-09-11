int sub_8047A40()
{
  signed int v0; // r6@1
  signed int v1; // r5@1
  int v2; // r4@1
  int v4; // [sp+Ch] [bp-4h]@0

  v2025968 = byte_3004350;
  v0 = 0;
  v1 = 33708396;
  v2 = 0;
  do
  {
    memcpy(v1, &dword_3004360[v2], 100);
    v1 += 100;
    v2 += 25;
    ++v0;
  }
  while ( v0 <= 5 );
  return v4;
}
