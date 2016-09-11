signed int __fastcall sub_8058EF0(int a1, int a2, unsigned __int8 a3)
{
  int v3; // r6@1
  unsigned int v4; // r5@2
  unsigned int v5; // r4@2
  signed int result; // r0@4

  v3 = a3;
  if ( v202E858 & 8
    && (v4 = a1 << 16, v5 = a2 << 16, (unsigned __int8)MapGridGetZCoordAt((signed __int16)a1, (signed __int16)a2) == 3)
    && (GetFieldObjectIdByXYZ(v4 >> 16, v5 >> 16, 3) & 0xFF) == 16 )
  {
    sub_805A20C(v3);
    result = 1;
  }
  else
  {
    result = 0;
  }
  return result;
}
