int __fastcall sub_8053720(char a1, char a2)
{
  char v2; // r5@1
  char v3; // r6@1
  int v5; // [sp+10h] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  if ( warp_data_is_not_neg_1(33724424) == 1 )
  {
    v20297F8 = v20297F0;
    v20297FC = v20297F4;
  }
  else
  {
    warp1_set(v2029808, v2029809, -1, v2, v3);
  }
  return v5;
}
