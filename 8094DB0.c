int unref_sub_8094DB0()
{
  unsigned int v0; // r6@1
  unsigned int *v1; // r5@2
  int v2; // r2@2
  int v3; // r2@2
  int v4; // r4@4
  int v6; // [sp+14h] [bp-4h]@0

  v0 = 1;
  while ( 1 )
  {
    v1 = &dword_3004360[25 * (unsigned __int8)sub_8094C20(v0)];
    if ( GetMonData((int)v1, 11, v2) )
    {
      if ( GetMonData((int)v1, 57, v3) )
        break;
    }
    v0 = (v0 + 1) & 0xFF;
    if ( v0 > 5 )
      return v6;
  }
  v4 = (unsigned __int8)sub_8094C20(0);
  sub_8094C98(0, v0);
  sub_806E6F0((int)&dword_3004360[25 * v4], (int)v1);
  return v6;
}
