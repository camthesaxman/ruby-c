int __fastcall sub_8099C70(unsigned __int8 a1)
{
  int v1; // r5@1
  int v2; // r4@1
  signed __int16 v3; // r1@1
  signed __int16 v4; // r1@3
  signed __int16 v5; // r1@5
  int v7; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = (char)sub_8099D90();
  sub_8099EB0(v1, v2);
  v20008B6 = 6 * v2;
  v20008B8 = 32;
  v20008BB = v1;
  v3 = 0;
  if ( v2 <= 0 )
    v3 = 5;
  v20008BC = v3;
  v20008BE = v2;
  v4 = 56;
  if ( v2 > 0 )
    v4 = 264;
  v20008C0 = v4;
  v5 = 0;
  if ( v2 <= 0 )
    v5 = 5;
  v20008C2 = v5;
  v20008C4 = v2;
  v20008C6 = 0;
  v20008C8 = 2;
  sub_809900C(v1, v2);
  sub_809A3D0(v1, v2);
  sub_809A774(v2);
  return v7;
}
