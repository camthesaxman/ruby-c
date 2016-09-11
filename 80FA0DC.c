int sub_80FA0DC()
{
  unsigned __int16 v0; // r4@1
  unsigned __int8 v1; // r1@2
  int v3; // [sp+10h] [bp-4h]@0

  SetMonMoveSlot((int)&dword_3004360[25 * v202E8CC], 0, v202E8CE);
  sub_803DE34((int)&dword_3004360[25 * v202E8CC], v202E8CE);
  v0 = v202E8CE;
  if ( v202E8CE <= 2u )
  {
    do
    {
      v1 = v0++;
      sub_80F9FDC((int)&dword_3004360[25 * v202E8CC], v1, (unsigned __int8)v0);
    }
    while ( v0 <= 2u );
  }
  return v3;
}
