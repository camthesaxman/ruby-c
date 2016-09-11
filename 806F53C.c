int __fastcall sub_806F53C(unsigned __int8 a1)
{
  unsigned __int8 v1; // r6@1
  int v2; // r5@2
  unsigned __int8 v3; // r0@2
  int v4; // r0@2
  int v5; // r5@2
  unsigned __int16 v6; // r4@2
  unsigned __int8 v7; // r0@2
  int v9; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  if ( !v202E8F6 )
  {
    v2 = v201C000;
    v3 = sub_809FA30(v202E8F6);
    v4 = sub_803DE34(v2, v3);
    v5 = v201C000;
    v6 = v201C008;
    v7 = sub_809FA30(v4);
    SetMonMoveSlot(v5, v6, v7);
    sub_806F1D0(v1);
  }
  return v9;
}
