// Copyright (c) 2018, The TurtleCoin Developers
//
// Please see the included LICENSE file for more information.
//

package walletdmanager

const (
	// DefaultTransferFee is the default fee. It is expressed in TRTL
	DefaultTransferFee float64 = 1.2

	logWalletdCurrentSessionFilename     = "nakamoto-service-session.log"
	logWalletdAllSessionsFilename        = "nakamoto-service.log"
	logTurtleCoindCurrentSessionFilename = "Nakamotod-session.log"
	logTurtleCoindAllSessionsFilename    = "Nakamotod.log"
	walletdLogLevel                      = "3" // should be at least 3 as I use some logs messages to confirm creation of wallet
	walletdCommandName                   = "nakamoto-service"
	turtlecoindCommandName               = "Nakamotod"
)
