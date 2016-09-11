int __fastcall sub_81229B8(int a1, int a2, int a3)
{
  unsigned int v3; // r5@1
  int v4; // r1@3
  int v5; // r2@3
  int v6; // r0@3
  int v8; // [sp+10h] [bp-4h]@0

  v3 = 0;
  do
  {
    if ( GetMonData((int)&dword_3004360[25 * v3], 11, a3) )
    {
      sub_806E4A4(v3, 3u, (int)&dword_3004360[25 * v3]);
      v6 = (unsigned __int8)sub_80A1CD8((int)&dword_3004360[25 * v3], v4, v5);
      if ( v6 && v6 != 6 )
        sub_806E104(v3, 3u, (v6 - 1) & 0xFF);
      else
        sub_806E294(v3, 3u, (int)&dword_3004360[25 * v3]);
      sub_806E3C0(v3, 3u, (int)&dword_3004360[25 * v3]);
      sub_806E050(v3, 3u, (int)&dword_3004360[25 * v3]);
      sub_806E630(v3, 3u, (int)&dword_3004360[25 * v3]);
    }
    v3 = (v3 + 1) & 0xFF;
  }
  while ( v3 <= 2 );
  return v8;
}
