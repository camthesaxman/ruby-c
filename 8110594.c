int __fastcall sub_8110594(unsigned __int8 a1, char a2, unsigned __int8 a3)
{
  unsigned __int8 v3; // r4@1
  char v4; // r6@1
  unsigned __int8 v5; // r7@1
  unsigned __int16 v6; // r5@1
  int v8; // [sp+10h] [bp-4h]@0

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = sub_811056C(a1);
  if ( sub_8110494(v3) == 1 )
    sub_81104E8((int)&gUnknown_0842CA7B, v6, v4, v5);
  else
    sub_81104E8((int)&gUnknown_0842CA8A, v6, v4, v5);
  return v8;
}
