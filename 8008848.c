int __fastcall LinkMain1(_BYTE *a1, int a2, int a3)
{
  _BYTE *v3; // r4@1
  int v4; // r5@1
  int v5; // r6@1
  int v6; // r1@6
  int v7; // r2@15
  int v8; // r3@17
  int v9; // r0@18
  int v10; // r2@20
  int v11; // r1@24

  v3 = a1;
  v4 = a2;
  v5 = a3;
  if ( (unsigned __int8)byte_3003071 <= 4u )
  {
    switch ( byte_3003071 )
    {
      case 0:
        DisableSerial();
        byte_3003071 = 1;
        break;
      case 1:
        if ( *a1 == 1 )
        {
          EnableSerial();
          byte_3003071 = 2;
        }
        break;
      case 2:
        v6 = *a1;
        if ( v6 == 1 )
        {
          if ( gLink == 8 && (unsigned __int8)byte_3003073 > 1u )
            byte_300307E = 1;
        }
        else if ( v6 == 2 )
        {
          byte_3003071 = 0;
          v400012A = 0;
        }
        else
        {
          CheckMasterOrSlave();
        }
        break;
      case 3:
        InitTimer();
        byte_3003071 = 4;
        goto LABEL_14;
      case 4:
LABEL_14:
        EnqueueSendCmd(v4);
        DequeueRecvCmds(v5);
        break;
      default:
        break;
    }
  }
  *v3 = 0;
  v7 = (unsigned __int8)byte_3003072 | 4 * (unsigned __int8)byte_3003073;
  if ( gLink == 8 )
    v7 |= 0x20u;
  v8 = (unsigned __int8)byte_300307C << 8;
  if ( byte_3003071 == 4 )
    v9 = v8 | 0x40 | v7;
  else
    v9 = v7 | v8;
  v10 = v9 | ((unsigned __int8)byte_300307F << 9) | ((unsigned __int8)byte_3003080 << 12) | ((unsigned __int8)byte_3003081 << 13) | ((unsigned __int8)byte_3003082 << 14);
  if ( byte_3003083 == 1 )
    v10 |= 0x10000u;
  if ( (unsigned __int8)byte_3003072 > 3u )
    v10 |= 0x20000u;
  v11 = v10;
  if ( byte_3003083 == 2 )
    v11 = v10 | 0x40000;
  return v11;
}
