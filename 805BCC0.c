int __fastcall sub_805BCC0(__int16 a1, __int16 a2)
{
  int v2; // r1@1
  int v4; // [sp+0h] [bp-4h]@0

  v2 = (unsigned __int8)GetFieldObjectIdByXY(a1, a2);
  if ( v2 != 16 )
    LOBYTE(dword_30048A0[9 * v2]) |= 4u;
  return v4;
}
