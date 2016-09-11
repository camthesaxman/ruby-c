int atk61_8025BA4()
{
  char *v0; // r8@2
  signed int v1; // r7@4
  char *v2; // r6@4
  int *v3; // r5@4
  int v4; // r0@7
  int v6; // [sp+0h] [bp-48h]@4
  char v7; // [sp+4h] [bp-44h]@4
  int v8; // [sp+44h] [bp-4h]@11

  if ( !v2024A64 )
  {
    v2024A60 = sub_8015150(*(_BYTE *)(v2024C10 + 1));
    v0 = (char *)&unk_30045C0;
    if ( !(battle_side_get_owner(v2024A60) << 24) )
      v0 = (char *)&unk_3004360;
    v1 = 0;
    v2 = &v7;
    v3 = &v6;
    do
    {
      if ( GetMonData(&v0[100 * v1], 65) && GetMonData(&v0[100 * v1], 65) != 412 )
      {
        *(_WORD *)v3 = GetMonData(&v0[100 * v1], 57);
        v4 = GetMonData(&v0[100 * v1], 55);
      }
      else
      {
        *(_WORD *)v3 = -1;
        v4 = 0;
      }
      *(_DWORD *)v2 = v4;
      v2 += 8;
      v3 += 2;
      ++v1;
    }
    while ( v1 <= 5 );
    dp01_build_cmdbuf_x30_TODO(0, (int)&v6, 1);
    dp01_battle_side_mark_buffer_for_execution(v2024A60);
    v2024C10 += 2;
  }
  return v8;
}
