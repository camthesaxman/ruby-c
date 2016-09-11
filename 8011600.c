int bc_801333C()
{
  signed int v0; // r7@4
  char *v1; // r6@4
  int *v2; // r5@4
  int v3; // r0@7
  signed int v4; // r7@10
  char *v5; // r6@10
  int *v6; // r5@10
  int v7; // r0@13
  int *v8; // r1@16
  int (*v9)(); // r0@16
  signed int v10; // r7@3
  char *v11; // r6@3
  int *v12; // r5@3
  int v13; // r0@19
  int v15; // [sp+0h] [bp-48h]@3
  char v16; // [sp+4h] [bp-44h]@3
  int v17; // [sp+44h] [bp-4h]@24

  if ( !v2024A64 )
  {
    if ( v20239F8 & 8 )
    {
      v0 = 0;
      v1 = &v16;
      v2 = &v15;
      do
      {
        if ( GetMonData((char *)&unk_30045C0 + 100 * v0, 65) && GetMonData((char *)&unk_30045C0 + 100 * v0, 65) != 412 )
        {
          *(_WORD *)v2 = GetMonData((char *)&unk_30045C0 + 100 * v0, 57);
          v3 = GetMonData((char *)&unk_30045C0 + 100 * v0, 55);
        }
        else
        {
          *(_WORD *)v2 = -1;
          v3 = 0;
        }
        *(_DWORD *)v1 = v3;
        v1 += 8;
        v2 += 2;
        ++v0;
      }
      while ( v0 <= 5 );
      v2024A60 = battle_get_side_with_given_state(1);
      dp01_build_cmdbuf_x30_TODO(0, (int)&v15, -128);
      dp01_battle_side_mark_buffer_for_execution(v2024A60);
      v4 = 0;
      v5 = &v16;
      v6 = &v15;
      do
      {
        if ( GetMonData((char *)&unk_3004360 + 100 * v4, 65) && GetMonData((char *)&unk_3004360 + 100 * v4, 65) != 412 )
        {
          *(_WORD *)v6 = GetMonData((char *)&unk_3004360 + 100 * v4, 57);
          v7 = GetMonData((char *)&unk_3004360 + 100 * v4, 55);
        }
        else
        {
          *(_WORD *)v6 = -1;
          v7 = 0;
        }
        *(_DWORD *)v5 = v7;
        v5 += 8;
        v6 += 2;
        ++v4;
      }
      while ( v4 <= 5 );
      v2024A60 = battle_get_side_with_given_state(0);
      dp01_build_cmdbuf_x30_TODO(0, (int)&v15, -128);
      dp01_battle_side_mark_buffer_for_execution(v2024A60);
      v8 = &dword_30042D4;
      v9 = bc_battle_begin_message;
    }
    else
    {
      v10 = 0;
      v11 = &v16;
      v12 = &v15;
      do
      {
        if ( GetMonData((char *)&unk_3004360 + 100 * v10, 65) && GetMonData((char *)&unk_3004360 + 100 * v10, 65) != 412 )
        {
          *(_WORD *)v12 = GetMonData((char *)&unk_3004360 + 100 * v10, 57);
          v13 = GetMonData((char *)&unk_3004360 + 100 * v10, 55);
        }
        else
        {
          *(_WORD *)v12 = -1;
          v13 = 0;
        }
        *(_DWORD *)v11 = v13;
        v11 += 8;
        v12 += 2;
        ++v10;
      }
      while ( v10 <= 5 );
      v8 = &dword_30042D4;
      v9 = bc_8013568;
    }
    *v8 = (int)v9;
  }
  return v17;
}
