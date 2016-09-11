int __fastcall sub_8089A8C(int a1, int a2, int a3)
{
  int v3; // r2@1
  int v4; // r6@3
  int v5; // r4@4
  unsigned __int16 v6; // r7@4
  int v7; // r2@9
  int v8; // r2@9
  unsigned __int16 v9; // r0@11
  int v10; // r1@11
  int v11; // r2@11
  int v12; // r3@11
  int v14; // [sp+14h] [bp-4h]@0

  v202FFA9 = 0;
  if ( GetMonData((int)&dword_3004360[25 * (unsigned __int8)byte_3005CE0], 45, a3) )
  {
    append_byte(33750954, (_BYTE *)0x202FFA9, 0);
    append_byte(33750954, (_BYTE *)0x202FFA9, 1);
    append_byte(33750954, (_BYTE *)0x202FFA9, 3);
  }
  else
  {
    v4 = 0;
    do
    {
      v5 = 0;
      v6 = v4 + 1;
      if ( gUnknown_0839F554[0] != 255 )
      {
        while ( GetMonData((int)&dword_3004360[25 * (unsigned __int8)byte_3005CE0], v4 + 13, v3) != (unsigned __int16)gUnknown_0839F554[v5] )
        {
          v5 = (v5 + 1) & 0xFFFF;
          if ( gUnknown_0839F554[v5] == 255 )
            goto _08089B48;
        }
        append_byte(33750954, (_BYTE *)0x202FFA9, v5 + 10);
      }
_08089B48:
      v4 = (unsigned __int16)(v4 + 1);
    }
    while ( v6 <= 3u );
    append_byte(33750954, (_BYTE *)0x202FFA9, 0);
    if ( GetMonData((int)&unk_30043C4, 11, v7) )
      append_byte(33750954, (_BYTE *)0x202FFA9, 1);
    v9 = GetMonData((int)&dword_3004360[25 * (unsigned __int8)byte_3005CE0], 12, v8);
    if ( itemid_is_mail(v9, v10, v11, v12) << 24 )
      append_byte(33750954, (_BYTE *)0x202FFA9, 7);
    else
      append_byte(33750954, (_BYTE *)0x202FFA9, 2);
    append_byte(33750954, (_BYTE *)0x202FFA9, 3);
  }
  return v14;
}
