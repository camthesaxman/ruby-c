int __fastcall sub_80A7834(char a1, char a2)
{
  char v2; // r5@1
  char v3; // r6@1
  int v4; // r0@1
  char v5; // r1@4
  char v6; // r0@4
  int v8; // [sp+Ch] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  v4 = sub_80A7958();
  if ( v4 == 1 )
  {
    v5 = 0;
    v6 = 2;
  }
  else
  {
    if ( v4 != 2 )
      return v8;
    v5 = 0;
    v6 = 1;
  }
  v2038550 = v6;
  v2038551 = v5;
  v2038552 = v2;
  v2038553 = v3;
  return v8;
}
