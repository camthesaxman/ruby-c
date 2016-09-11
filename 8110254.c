int __fastcall sub_8110254(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( v2024D26 == 1 )
  {
    sub_81101FC(a1 ^ 1);
    sub_8110228(v1);
  }
  else if ( v2024D26 == 2 )
  {
    sub_8110228(a1 ^ 1);
    sub_81101FC(v1);
  }
  return v3;
}
